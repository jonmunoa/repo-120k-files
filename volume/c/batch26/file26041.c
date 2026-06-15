// fichero 26041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26041;

Registro26041 crear_registro26041(int id) {
    Registro26041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
