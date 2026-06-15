// fichero 41901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41901;

Registro41901 crear_registro41901(int id) {
    Registro41901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
