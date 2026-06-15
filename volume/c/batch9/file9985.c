// fichero 9985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9985;

Registro9985 crear_registro9985(int id) {
    Registro9985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
