// fichero 9629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9629;

Registro9629 crear_registro9629(int id) {
    Registro9629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
