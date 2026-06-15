// fichero 40145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40145;

Registro40145 crear_registro40145(int id) {
    Registro40145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
