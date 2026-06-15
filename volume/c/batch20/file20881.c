// fichero 20881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20881;

Registro20881 crear_registro20881(int id) {
    Registro20881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
