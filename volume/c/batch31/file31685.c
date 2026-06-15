// fichero 31685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31685;

Registro31685 crear_registro31685(int id) {
    Registro31685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
