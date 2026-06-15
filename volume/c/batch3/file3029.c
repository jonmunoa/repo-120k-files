// fichero 3029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3029;

Registro3029 crear_registro3029(int id) {
    Registro3029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
