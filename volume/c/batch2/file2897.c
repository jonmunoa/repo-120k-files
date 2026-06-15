// fichero 2897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2897;

Registro2897 crear_registro2897(int id) {
    Registro2897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
