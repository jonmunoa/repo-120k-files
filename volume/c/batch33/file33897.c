// fichero 33897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33897;

Registro33897 crear_registro33897(int id) {
    Registro33897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
