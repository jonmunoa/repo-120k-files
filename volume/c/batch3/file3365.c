// fichero 3365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3365;

Registro3365 crear_registro3365(int id) {
    Registro3365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
