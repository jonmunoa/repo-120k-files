// fichero 19977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19977;

Registro19977 crear_registro19977(int id) {
    Registro19977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
