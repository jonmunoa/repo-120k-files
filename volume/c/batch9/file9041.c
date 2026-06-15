// fichero 9041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9041;

Registro9041 crear_registro9041(int id) {
    Registro9041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
