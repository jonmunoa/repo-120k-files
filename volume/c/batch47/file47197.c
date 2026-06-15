// fichero 47197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47197;

Registro47197 crear_registro47197(int id) {
    Registro47197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
