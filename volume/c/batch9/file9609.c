// fichero 9609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9609;

Registro9609 crear_registro9609(int id) {
    Registro9609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
