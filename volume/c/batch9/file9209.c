// fichero 9209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9209;

Registro9209 crear_registro9209(int id) {
    Registro9209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
