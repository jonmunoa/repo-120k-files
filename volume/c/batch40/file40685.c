// fichero 40685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40685;

Registro40685 crear_registro40685(int id) {
    Registro40685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
