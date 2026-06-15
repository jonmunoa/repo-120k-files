// fichero 27897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27897;

Registro27897 crear_registro27897(int id) {
    Registro27897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
