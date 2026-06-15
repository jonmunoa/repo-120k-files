// fichero 33353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33353;

Registro33353 crear_registro33353(int id) {
    Registro33353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
