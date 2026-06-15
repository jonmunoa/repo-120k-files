// fichero 36877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36877;

Registro36877 crear_registro36877(int id) {
    Registro36877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
