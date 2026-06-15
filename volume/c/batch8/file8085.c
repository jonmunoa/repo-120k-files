// fichero 8085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8085;

Registro8085 crear_registro8085(int id) {
    Registro8085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
