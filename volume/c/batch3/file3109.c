// fichero 3109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3109;

Registro3109 crear_registro3109(int id) {
    Registro3109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
