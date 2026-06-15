// fichero 20049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20049;

Registro20049 crear_registro20049(int id) {
    Registro20049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
