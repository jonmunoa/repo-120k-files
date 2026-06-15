// fichero 21997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21997;

Registro21997 crear_registro21997(int id) {
    Registro21997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
