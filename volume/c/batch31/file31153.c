// fichero 31153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31153;

Registro31153 crear_registro31153(int id) {
    Registro31153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
