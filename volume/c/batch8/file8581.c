// fichero 8581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8581;

Registro8581 crear_registro8581(int id) {
    Registro8581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
