// fichero 9117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9117;

Registro9117 crear_registro9117(int id) {
    Registro9117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
