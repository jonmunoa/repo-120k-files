// fichero 20109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20109;

Registro20109 crear_registro20109(int id) {
    Registro20109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20109(Registro20109 r) {
    return r.valor + r.id;
}
