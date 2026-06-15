// fichero 8165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8165;

Registro8165 crear_registro8165(int id) {
    Registro8165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
