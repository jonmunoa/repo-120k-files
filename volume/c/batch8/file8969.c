// fichero 8969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8969;

Registro8969 crear_registro8969(int id) {
    Registro8969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
