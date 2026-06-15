// fichero 9889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9889;

Registro9889 crear_registro9889(int id) {
    Registro9889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
