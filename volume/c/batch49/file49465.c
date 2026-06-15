// fichero 49465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49465;

Registro49465 crear_registro49465(int id) {
    Registro49465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
