// fichero 40945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40945;

Registro40945 crear_registro40945(int id) {
    Registro40945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
