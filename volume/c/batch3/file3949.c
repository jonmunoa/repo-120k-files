// fichero 3949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3949;

Registro3949 crear_registro3949(int id) {
    Registro3949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
