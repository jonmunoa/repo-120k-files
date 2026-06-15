// fichero 40545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40545;

Registro40545 crear_registro40545(int id) {
    Registro40545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
