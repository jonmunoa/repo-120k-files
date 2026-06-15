// fichero 9789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9789;

Registro9789 crear_registro9789(int id) {
    Registro9789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
