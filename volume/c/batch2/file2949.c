// fichero 2949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2949;

Registro2949 crear_registro2949(int id) {
    Registro2949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
