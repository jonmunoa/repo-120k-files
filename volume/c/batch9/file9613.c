// fichero 9613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9613;

Registro9613 crear_registro9613(int id) {
    Registro9613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
