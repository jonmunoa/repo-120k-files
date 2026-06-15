// fichero 41149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41149;

Registro41149 crear_registro41149(int id) {
    Registro41149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
