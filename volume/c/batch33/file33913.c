// fichero 33913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33913;

Registro33913 crear_registro33913(int id) {
    Registro33913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
