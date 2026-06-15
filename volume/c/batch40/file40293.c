// fichero 40293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40293;

Registro40293 crear_registro40293(int id) {
    Registro40293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
