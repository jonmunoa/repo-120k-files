// fichero 20345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20345;

Registro20345 crear_registro20345(int id) {
    Registro20345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
