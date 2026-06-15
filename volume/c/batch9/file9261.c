// fichero 9261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9261;

Registro9261 crear_registro9261(int id) {
    Registro9261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
