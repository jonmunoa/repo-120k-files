// fichero 36781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36781;

Registro36781 crear_registro36781(int id) {
    Registro36781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
