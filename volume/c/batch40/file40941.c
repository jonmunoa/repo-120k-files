// fichero 40941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40941;

Registro40941 crear_registro40941(int id) {
    Registro40941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
