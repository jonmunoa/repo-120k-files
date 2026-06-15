// fichero 8345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8345;

Registro8345 crear_registro8345(int id) {
    Registro8345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
