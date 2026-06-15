// fichero 18945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18945;

Registro18945 crear_registro18945(int id) {
    Registro18945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
