// fichero 9901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9901;

Registro9901 crear_registro9901(int id) {
    Registro9901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
