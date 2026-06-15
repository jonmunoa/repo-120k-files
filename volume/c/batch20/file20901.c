// fichero 20901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20901;

Registro20901 crear_registro20901(int id) {
    Registro20901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
