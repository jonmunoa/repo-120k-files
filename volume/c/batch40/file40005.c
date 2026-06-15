// fichero 40005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40005;

Registro40005 crear_registro40005(int id) {
    Registro40005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
