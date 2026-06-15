// fichero 40445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40445;

Registro40445 crear_registro40445(int id) {
    Registro40445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
