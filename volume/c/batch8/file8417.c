// fichero 8417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8417;

Registro8417 crear_registro8417(int id) {
    Registro8417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
