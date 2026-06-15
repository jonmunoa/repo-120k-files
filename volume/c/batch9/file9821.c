// fichero 9821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9821;

Registro9821 crear_registro9821(int id) {
    Registro9821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
