// fichero 37569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37569;

Registro37569 crear_registro37569(int id) {
    Registro37569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
