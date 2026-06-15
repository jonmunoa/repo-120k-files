// fichero 3697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3697;

Registro3697 crear_registro3697(int id) {
    Registro3697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
