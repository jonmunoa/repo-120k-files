// fichero 9013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9013;

Registro9013 crear_registro9013(int id) {
    Registro9013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
