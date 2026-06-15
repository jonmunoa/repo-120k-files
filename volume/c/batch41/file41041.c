// fichero 41041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41041;

Registro41041 crear_registro41041(int id) {
    Registro41041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
